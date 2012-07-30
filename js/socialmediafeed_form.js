$(function() {
  if (Drupal.jsEnabled) {
    if ($("#edit-socialmediafeed-facebook-title").size() && $("#edit-socialmediafeed-facebook-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialmediafeed-facebook-title").attr("disabled","disabled");
      $("#edit-socialmediafeed-facebook-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialmediafeed-facebook-title-checkbox").bind("click", function() {
      if ($("#edit-socialmediafeed-facebook-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialmediafeed-facebook-title").attr("disabled","disabled");
        $("#edit-socialmediafeed-facebook-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialmediafeed-facebook-title").removeAttr("disabled");
        $("#edit-socialmediafeed-facebook-title")[0].focus();
        $("#edit-socialmediafeed-facebook-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialmediafeed-twitter-title").size() && $("#edit-socialmediafeed-twitter-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialmediafeed-twitter-title").attr("disabled","disabled");
      $("#edit-socialmediafeed-twitter-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialmediafeed-twitter-title-checkbox").bind("click", function() {
      if ($("#edit-socialmediafeed-twitter-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialmediafeed-twitter-title").attr("disabled","disabled");
        $("#edit-socialmediafeed-twitter-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialmediafeed-twitter-title").removeAttr("disabled");
        $("#edit-socialmediafeed-twitter-title")[0].focus();
        $("#edit-socialmediafeed-twitter-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialmediafeed-youtube-title").size() && $("#edit-socialmediafeed-youtube-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialmediafeed-youtube-title").attr("disabled","disabled");
      $("#edit-socialmediafeed-youtube-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialmediafeed-youtube-title-checkbox").bind("click", function() {
      if ($("#edit-socialmediafeed-youtube-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialmediafeed-youtube-title").attr("disabled","disabled");
        $("#edit-socialmediafeed-youtube-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialmediafeed-youtube-title").removeAttr("disabled");
        $("#edit-socialmediafeed-youtube-title")[0].focus();
        $("#edit-socialmediafeed-youtube-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialmediafeed-foursquare-title").size() && $("#edit-socialmediafeed-foursquare-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialmediafeed-foursquare-title").attr("disabled","disabled");
      $("#edit-socialmediafeed-foursquare-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialmediafeed-foursquare-title-checkbox").bind("click", function() {
      if ($("#edit-socialmediafeed-foursquare-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialmediafeed-foursquare-title").attr("disabled","disabled");
        $("#edit-socialmediafeed-foursquare-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialmediafeed-foursquare-title").removeAttr("disabled");
        $("#edit-socialmediafeed-foursquare-title")[0].focus();
        $("#edit-socialmediafeed-foursquare-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialmediafeed-facebook-title2").size() && $("#edit-socialmediafeed-facebook-title-checkbox2").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialmediafeed-facebook-title2").attr("disabled","disabled");
      $("#edit-socialmediafeed-facebook-title2-wrapper > div.description").hide(0);
    }
    $("#edit-socialmediafeed-facebook-title-checkbox2").bind("click", function() {
      if ($("#edit-socialmediafeed-facebook-title-checkbox2").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialmediafeed-facebook-title2").attr("disabled","disabled");
        $("#edit-socialmediafeed-facebook-title2-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialmediafeed-facebook-title2").removeAttr("disabled");
        $("#edit-socialmediafeed-facebook-title2")[0].focus();
        $("#edit-socialmediafeed-facebook-title2-wrapper > div[class=description]").slideDown('fast');
      }
    });
  }
});
