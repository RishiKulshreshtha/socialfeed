<?php

/**
 * @file
 */

// /**
//  * @file
//  * Social Feed module admin inc file.
//  *
//  * Contains admin configuration page callback functions.
//  */
//
// use Drupal\Core\Url;
// /**
//  * Form builder; Configure social feeds settings for this site.
//  *
//  * @ingroup forms
//  *
//  * @see system_settings_form()
//  */
// function socialfeed_facebook_settings($form, &$form_state) {
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_facebook_page_name'] = [
//     '#type' => 'textfield',
//     '#title' => t('Facebook Page Name'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_page_name'),
//     '#description' => t('eg. If your Facebook page URL is this http://www.facebook.com/YOUR_PAGE_NAME, <br />then you just need to add this YOUR_PAGE_NAME above OR find your Facebook Page ID <a href="@here" target="@blank">here</a>.', ['@here' => 'http://findmyfbid.com/', '@blank' => '_blank']),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_facebook_app_id'] = [
//     '#type' => 'textfield',
//     '#title' => t('Facebook App ID'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_app_id'),
//     '#description' => t('Create your Facebook app and visit <a href="@this" target="@blank">this link</a> to get App ID.', ['@this' => 'https://developers.facebook.com/apps', '@blank' => '_blank']),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_facebook_secret_key'] = [
//     '#type' => 'textfield',
//     '#title' => t('Facebook Secret Key'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_secret_key'),
//     '#description' => t('<a href="@this" target="@blank"> This link</a> will help you to find out your App Secret Key.', ['@this' => 'https://developers.facebook.com/apps', '@blank' => '_blank']),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   $form['socialfeed_facebook_no_feeds'] = [
//     '#type' => 'textfield',
//     '#title' => t('Number of Feeds'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_no_feeds'),
//     '#description' => t('Number of feeds you want to show from your Facebook Page.'),
//     '#size' => 60,
//     '#maxlength' => 60,
//     '#element_validate' => ['element_validate_integer_positive'],
//   ];
//   $form['socialfeed_facebook_all_types'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Show all post types'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_all_types'),
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_facebook_post_type'] = [
//     '#type' => 'select',
//     '#title' => 'Select your post type(s) to show',
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_post_type'),
//     '#options' => ['link', 'photo', 'status', 'video'],
//     '#states' => [
//       'visible' => [
//         ':input[name="socialfeed_facebook_all_types"]' => ['checked' => FALSE],
//       ],
//       'required' => [
//         ':input[name="socialfeed_facebook_all_types"]' => ['checked' => FALSE],
//       ],
//     ],
//   ];
//   $form['socialfeed_facebook_display_pic'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Show Post Picture'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_display_pic'),
//     '#states' => [
//       'visible' => [
//         ':input[name="socialfeed_facebook_post_type"]' => ['value' => 1],
//       ],
//     ],
//   ];
//   $form['socialfeed_facebook_display_video'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Show Post Video'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_display_video'),
//     '#states' => [
//       'visible' => [
//         ':input[name="socialfeed_facebook_post_type"]' => ['value' => 3],
//       ],
//     ],
//   ];
//   $form['socialfeed_facebook_trim_length'] = [
//     '#type' => 'textfield',
//     '#title' => t('Trim Length'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_trim_length'),
//     '#size' => 60,
//     '#maxlength' => 60,
//     '#element_validate' => ['element_validate_integer_positive'],
//   ];
//   $form['socialfeed_facebook_teaser_text'] = [
//     '#type' => 'textfield',
//     '#title' => t('Teaser Text'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_teaser_text'),
//     '#size' => 60,
//     '#maxlength' => 60,
//   ];
//   $form['socialfeed_facebook_hashtag'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Link to Hashtag'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_hashtag'),
//   ];
//   $form['socialfeed_facebook_time_stamp'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Show Date/Time'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_time_stamp'),
//   ];
//   $form['socialfeed_facebook_time_format'] = [
//     '#type' => 'textfield',
//     '#title' => t('Date/Time format'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_facebook_time_format'),
//     '#description' => t('You can check for PHP Date Formats <a href="@datetime" target="@blank">here</a>', ['@datetime' => 'http://php.net/manual/en/function.date.php', '@blank' => '_blank']),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#states' => [
//       'visible' => [
//         ':input[name="socialfeed_facebook_time_stamp"]' => ['checked' => TRUE],
//       ],
//     ],
//   ];
//
//   return system_settings_form($form);
// }
//
// /**
//  * Form builder; Configure social feeds settings for this site.
//  *
//  * @ingroup forms
//  *
//  * @see system_settings_form()
//  */
// function socialfeed_twitter_settings($form, &$form_state) {
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_twitter_consumer_key'] = [
//     '#type' => 'textfield',
//     '#title' => t('Twitter Consumer Key'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_consumer_key'),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_twitter_consumer_secret'] = [
//     '#type' => 'textfield',
//     '#title' => t('Twitter Consumer Secret'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_consumer_secret'),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_twitter_username'] = [
//     '#type' => 'textfield',
//     '#title' => t('Twitter User Name'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_username'),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   $form['socialfeed_twitter_tweets_count'] = [
//     '#type' => 'textfield',
//     '#title' => t('Tweetes Count'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_tweets_count'),
//     '#size' => 60,
//     '#maxlength' => 100,
//   ];
//   $form['socialfeed_twitter_hashtag'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Link to Hashtag'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_hashtag'),
//   ];
//   $form['socialfeed_twitter_time_stamp'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Show Date/Time'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_time_stamp'),
//   ];
//   $form['socialfeed_twitter_time_format'] = [
//     '#type' => 'textfield',
//     '#title' => t('Date/Time format'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_time_format'),
//     '#description' => t('You can check for PHP Date Formats <a href="@datetime" target="@blank">here</a>', ['@datetime' => 'http://php.net/manual/en/function.date.php', '@blank' => '_blank']),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#states' => [
//       'visible' => [
//         ':input[name="socialfeed_twitter_time_stamp"]' => ['checked' => TRUE],
//       ],
//     ],
//   ];
//   $form['socialfeed_twitter_time_ago'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Show Twitter Style Date'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_time_ago'),
//   ];
//   $form['socialfeed_twitter_trim_length'] = [
//     '#type' => 'textfield',
//     '#title' => t('Trim Length'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_trim_length'),
//     '#size' => 60,
//     '#maxlength' => 60,
//   ];
//   $form['socialfeed_twitter_teaser_text'] = [
//     '#type' => 'textfield',
//     '#title' => t('Teaser Text'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_twitter_teaser_text'),
//     '#size' => 60,
//     '#maxlength' => 60,
//   ];
//
//   return system_settings_form($form);
// }
//
// /**
//  * Form builder; Configure social feeds settings for this site.
//  *
//  * @ingroup forms
//  *
//  * @see system_settings_form()
//  */
// function socialfeed_instagram_settings($form, &$form_state) {
//   $form['socialfeed_instagram_header']['#markup'] = t('To get Client ID you need to manage clients from your instagram account detailed information <a href="@admin" target="@blank">here</a>.', ['@admin' => Url::fromRoute('help.page'), '@blank' => '_blank']);
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_instagram_client_id'] = [
//     '#type' => 'textfield',
//     '#title' => t('Client ID'),
//     '#description' => t('Client ID from your Instagram Account, for more details click <a href="@here"  target="@blank">here</a>.', ['@here' => 'https://gist.github.com/hemangigokhale/156db13c70840f076d766cd2b3976276#instagram', '@blank' => '_blank']),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_client_id'),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_instagram_redirect_uri'] = [
//     '#type' => 'textfield',
//     '#title' => t('Redirect URI'),
//     '#description' => t('Redirect URI from your Instagram Account.'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_redirect_uri'),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   $form['socialfeed_instagram_auth_link'] = [
//     '#type' => 'item',
//     '#title' => t('Generate Instagram Access Token'),
//     '#description' => t('Access this URL in your browser https://instagram.com/oauth/authorize/?client_id=&lt;your_client_id&gt;&redirect_uri=&lt;your_redirect_uri&gt;&response_type=token, you will get the access token.'),
//     '#markup' => t('Click <a href="@here" target="@blank">here</a> for more details.', ['@here' => Url::fromUri('https://gist.github.com/hemangigokhale/156db13c70840f076d766cd2b3976276#generate-an-instagram-access-token'), '@blank' => '_blank']),
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   $form['socialfeed_instagram_access_token'] = [
//     '#type' => 'textfield',
//     '#title' => t('Access Token'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_access_token'),
//     '#size' => 60,
//     '#maxlength' => 100,
//     '#required' => TRUE,
//   ];
//   $form['socialfeed_instagram_picture_count'] = [
//     '#type' => 'textfield',
//     '#title' => t('Picture Count'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_picture_count'),
//     '#size' => 60,
//     '#maxlength' => 100,
//   ];
//   // @FIXME
//   // Could not extract the default value because it is either indeterminate, or
//   // not scalar. You'll need to provide a default value in
//   // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//   if (\Drupal::config('socialfeed.settings')->get('socialfeed_instagram_access_token')) {
//     // @FIXME
//     // Could not extract the default value because it is either indeterminate, or
//     // not scalar. You'll need to provide a default value in
//     // config/install/socialfeed.settings.yml and config/schema/socialfeed.schema.yml.
//     $form['socialfeed_instagram_feed'] = [
//       '#type' => 'item',
//       '#title' => t('Feed URL'),
//       '#markup' => t('https://api.instagram.com/v1/users/self/feed?access_token=@socialfeed_instagram_access_token&count=@socialfeed_instagram_picture_count',
//         [
//           '@socialfeed_instagram_access_token' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_access_token'),
//           '@socialfeed_instagram_picture_count' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_picture_count'),
//         ]
//       ),
//     ];
//   }
//   $form['socialfeed_instagram_picture_resolution'] = [
//     '#type' => 'select',
//     '#title' => t('Picture Resolution'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_picture_resolution'),
//     '#options' => [
//       'thumbnail' => t('Thumbnail'),
//       'low_resolution' => t('Low Resolution'),
//       'standard_resolution' => t('Standard Resolution'),
//     ],
//   ];
//   $form['socialfeed_instagram_post_link'] = [
//     '#type' => 'checkbox',
//     '#title' => t('Show post URL'),
//     '#default_value' => \Drupal::config('socialfeed.settings')->get('socialfeed_instagram_post_link'),
//   ];
//
//   return system_settings_form($form);
// }
