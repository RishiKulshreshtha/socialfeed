--- SocialMediaFeed ---

This module creates a block on the site that will display your Facebook,
Twitter, Youtube, or Foursquare feed using their APIs.

--- Installation ---

To install place the SocialMediaFeed folder in the sites/all/modules directory
of your Drupal site. Then, visit http://example.com/admin/build/modules to
enable the module.

--- Configuration ---

Visit http://example.com/admin/settings/socialmediafeed. Here you configure
your feed.

1. Facebook

Facebook requires you to create an application to retrieve an access token. Go
to http://www.facebook.com/developers/ and create an application with the
default settings. Copy and paste the App ID and App Secret from your Facebook
application into the corresponding fields on your Drupal site. After that,
paste the ID of the Facebook user you want the feed to pull data from.

2. Twitter

With Twitter, you need to place either the Twitter ID or Twitter User Name.
Just place this in the Profile ID field in the Twitter field set.

3. Youtube

Youtube requires a username so once you retrieve that, place it in the Profile
Name field in the Youtube section.

4. Foursquare

Foursquare has a different authentication process. It requires you to specify
an access token. To retrieve this, you must create an application at
https://foursquare.com/oauth/. Once you have that follow the instructions on
retrieving an access token https://developer.foursquare.com/docs/oauth.html. If
you aren't familiar with APIs and oauth, Blueprint Interactive provides an
foursquare api token processor at
http://www.blueprintinteractive.com/blog/foursquare-google-maps-simplified and
follow the link that says "Click here to get your token". This is a good
temporary solution but eventually, you should create your own application.

--- Enabling the Block ---

This module creates a block that can be http://example.com/admin/build/block.
This takes the data and formats it into a simple feed display.

--- Running the Cron ---

This module integrates with Drupal's cron system and relies on it to routinely,
retrieve data. For best results, your should have a cron running regularly.
