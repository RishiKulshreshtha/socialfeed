<?php

namespace Drupal\socialfeed\Plugin\Block;

use GuzzleHttp\Psr7\Request;
use GuzzleHttp\Client;
use Drupal\Core\Block\BlockBase;
use Drupal\Component\Serialization\Json;

/**
 * Provides Facebook Block.
 *
 * @Block(
 *  id = "facebook_block",
 *  admin_label = @Translation("Facebook"),
 *  category = @Translation("Social"),
 * )
 */
class FacebookBlock extends BlockBase {
  /**
   * The HTTP client to fetch the feed data with.
   *
   * @var \GuzzleHttp\ClientInterface
   */
  protected $httpClient;

  /**
   *
   */
  public function __construct($http_client) {
    $this->httpClient = $http_client;
  }

  /**
   * {inheritdoc}.
   */
  public function build() {
    $rest_api = 'https://graph.facebook.com/137632772949777/feed?access_token=128912224336176|9b0d2260d8b07f4756740ecd042766bf&fields=created_time,full_picture,id,message,permalink_url,type,source';
    $client = new Client();
    $res = $client->request('GET', $rest_api);
    $content_type = $res->getHeader('Content-Type');
    $json = $res->getBody()->getContents();
    $data = Json::decode($json);
    $items = [];
    foreach ($data['data'] as $key => $value) {
      $items[] = [
        'created_time' => $value['created_time'],
        'id' => $value['id'],
        'message' => isset($value['message']) ? $value['message'] : NULL,
        'permalink_url' => $value['permalink_url'],
        'type' => $value['type'],
        'source' => isset($value['source']) ? $value['source'] : NULL,
      ];
    }
    return [
      '#theme' => 'facebook',
      '#items' => $items,
    ];
  }

}
