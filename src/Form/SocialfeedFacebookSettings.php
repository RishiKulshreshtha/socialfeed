<?php

namespace Drupal\socialfeed\Form;

use Drupal\Core\Form\ConfigFormBase;
use Drupal\Core\Form\FormStateInterface;
use Drupal\Core\Render\Element;

/**
 *
 */
class SocialfeedFacebookSettings extends ConfigFormBase {

  /**
   * {@inheritdoc}
   */
  public function getFormId() {
    return 'socialfeed_facebook_settings';
  }

  /**
   * {@inheritdoc}
   */
  public function submitForm(array &$form, FormStateInterface $form_state) {
    $config = $this->config('socialfeed.settings');

    foreach (Element::children($form) as $variable) {
      $config->set($variable, $form_state->getValue($form[$variable]['#parents']));
    }
    $config->save();

    if (method_exists($this, '_submitForm')) {
      $this->_submitForm($form, $form_state);
    }

    parent::submitForm($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  protected function getEditableConfigNames() {
    return ['socialfeed.settings'];
  }

  /**
   *
   */
  public function buildForm(array $form, FormStateInterface $form_state) {
    // @FIXME
    // Could not extract the default value because it is either indeterminate, or
    // not scalar. You'll need to provide a default value in
    // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
    $form['socialfeed_facebook_page_name'] = [
      '#type' => 'textfield',
      '#title' => t('Facebook Page Name'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_page_name'),
      '#description' => t('eg. If your Facebook page URL is this http://www.facebook.com/YOUR_PAGE_NAME, <br />then you just need to add this YOUR_PAGE_NAME above OR find your Facebook Page ID <a href="@here" target="@blank">here</a>.', [
        '@here' => 'http://findmyfbid.com/',
        '@blank' => '_blank',
      ]),
      '#size' => 60,
      '#maxlength' => 100,
      '#required' => TRUE,
    ];
    // @FIXME
    // Could not extract the default value because it is either indeterminate, or
    // not scalar. You'll need to provide a default value in
    // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
    $form['socialfeed_facebook_app_id'] = [
      '#type' => 'textfield',
      '#title' => t('Facebook App ID'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_app_id'),
      '#description' => t('Create your Facebook app and visit <a href="@this" target="@blank">this link</a> to get App ID.', [
        '@this' => 'https://developers.facebook.com/apps',
        '@blank' => '_blank',
      ]),
      '#size' => 60,
      '#maxlength' => 100,
      '#required' => TRUE,
    ];
    // @FIXME
    // Could not extract the default value because it is either indeterminate, or
    // not scalar. You'll need to provide a default value in
    // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
    $form['socialfeed_facebook_secret_key'] = [
      '#type' => 'textfield',
      '#title' => t('Facebook Secret Key'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_secret_key'),
      '#description' => t('<a href="@this" target="@blank"> This link</a> will help you to find out your App Secret Key.', [
        '@this' => 'https://developers.facebook.com/apps',
        '@blank' => '_blank',
      ]),
      '#size' => 60,
      '#maxlength' => 100,
      '#required' => TRUE,
    ];
    $form['socialfeed_facebook_no_feeds'] = [
      '#type' => 'textfield',
      '#title' => t('Number of Feeds'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_no_feeds'),
      '#description' => t('Number of feeds you want to show from your Facebook Page.'),
      '#size' => 60,
      '#maxlength' => 60,
      '#element_validate' => [
        'element_validate_integer_positive',
      ],
    ];
    $form['socialfeed_facebook_all_types'] = [
      '#type' => 'checkbox',
      '#title' => t('Show all post types'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_all_types'),
    ];
    // @FIXME
    // Could not extract the default value because it is either indeterminate, or
    // not scalar. You'll need to provide a default value in
    // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
    $form['socialfeed_facebook_post_type'] = [
      '#type' => 'select',
      '#title' => 'Select your post type(s) to show',
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_post_type'),
      '#options' => [
        'link',
        'photo',
        'status',
        'video',
      ],
      '#states' => [
        'visible' => [
          ':input[name="socialfeed_facebook_all_types"]' => [
            'checked' => FALSE,
          ],
        ],
        'required' => [
          ':input[name="socialfeed_facebook_all_types"]' => [
            'checked' => FALSE,
          ],
        ],
      ],
    ];
    $form['socialfeed_facebook_display_pic'] = [
      '#type' => 'checkbox',
      '#title' => t('Show Post Picture'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_display_pic'),
      '#states' => [
        'visible' => [
          ':input[name="socialfeed_facebook_post_type"]' => [
            'value' => 1,
          ],
        ],
      ],
    ];
    $form['socialfeed_facebook_display_video'] = [
      '#type' => 'checkbox',
      '#title' => t('Show Post Video'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_display_video'),
      '#states' => [
        'visible' => [
          ':input[name="socialfeed_facebook_post_type"]' => [
            'value' => 3,
          ],
        ],
      ],
    ];
    $form['socialfeed_facebook_trim_length'] = [
      '#type' => 'textfield',
      '#title' => t('Trim Length'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_trim_length'),
      '#size' => 60,
      '#maxlength' => 60,
      '#element_validate' => [
        'element_validate_integer_positive',
      ],
    ];
    $form['socialfeed_facebook_teaser_text'] = [
      '#type' => 'textfield',
      '#title' => t('Teaser Text'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_teaser_text'),
      '#size' => 60,
      '#maxlength' => 60,
    ];
    $form['socialfeed_facebook_hashtag'] = [
      '#type' => 'checkbox',
      '#title' => t('Link to Hashtag'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_hashtag'),
    ];
    $form['socialfeed_facebook_time_stamp'] = [
      '#type' => 'checkbox',
      '#title' => t('Show Date/Time'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_time_stamp'),
    ];
    $form['socialfeed_facebook_time_format'] = [
      '#type' => 'textfield',
      '#title' => t('Date/Time format'),
      '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_time_format'),
      '#description' => t('You can check for PHP Date Formats <a href="@datetime" target="@blank">here</a>', [
        '@datetime' => 'http://php.net/manual/en/function.date.php',
        '@blank' => '_blank',
      ]),
      '#size' => 60,
      '#maxlength' => 100,
      '#states' => [
        'visible' => [
          ':input[name="socialfeed_facebook_time_stamp"]' => [
            'checked' => TRUE,
          ],
        ],
      ],
    ];

    return parent::buildForm($form, $form_state);
  }

}
