$(function() {
  if (Drupal.jsEnabled) {
    if ($("#edit-socialfeed-facebook-title").size() && $("#edit-socialfeed-facebook-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialfeed-facebook-title").attr("disabled","disabled");
      $("#edit-socialfeed-facebook-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialfeed-facebook-title-checkbox").bind("click", function() {
      if ($("#edit-socialfeed-facebook-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialfeed-facebook-title").attr("disabled","disabled");
        $("#edit-socialfeed-facebook-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialfeed-facebook-title").removeAttr("disabled");
        $("#edit-socialfeed-facebook-title")[0].focus();
        $("#edit-socialfeed-facebook-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialfeed-twitter-title").size() && $("#edit-socialfeed-twitter-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialfeed-twitter-title").attr("disabled","disabled");
      $("#edit-socialfeed-twitter-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialfeed-twitter-title-checkbox").bind("click", function() {
      if ($("#edit-socialfeed-twitter-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialfeed-twitter-title").attr("disabled","disabled");
        $("#edit-socialfeed-twitter-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialfeed-twitter-title").removeAttr("disabled");
        $("#edit-socialfeed-twitter-title")[0].focus();
        $("#edit-socialfeed-twitter-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialfeed-youtube-title").size() && $("#edit-socialfeed-youtube-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialfeed-youtube-title").attr("disabled","disabled");
      $("#edit-socialfeed-youtube-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialfeed-youtube-title-checkbox").bind("click", function() {
      if ($("#edit-socialfeed-youtube-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialfeed-youtube-title").attr("disabled","disabled");
        $("#edit-socialfeed-youtube-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialfeed-youtube-title").removeAttr("disabled");
        $("#edit-socialfeed-youtube-title")[0].focus();
        $("#edit-socialfeed-youtube-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialfeed-foursquare-title").size() && $("#edit-socialfeed-foursquare-title-checkbox").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialfeed-foursquare-title").attr("disabled","disabled");
      $("#edit-socialfeed-foursquare-title-wrapper > div.description").hide(0);
    }
    $("#edit-socialfeed-foursquare-title-checkbox").bind("click", function() {
      if ($("#edit-socialfeed-foursquare-title-checkbox").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialfeed-foursquare-title").attr("disabled","disabled");
        $("#edit-socialfeed-foursquare-title-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialfeed-foursquare-title").removeAttr("disabled");
        $("#edit-socialfeed-foursquare-title")[0].focus();
        $("#edit-socialfeed-foursquare-title-wrapper > div[class=description]").slideDown('fast');
      }
    });

    if ($("#edit-socialfeed-facebook-title2").size() && $("#edit-socialfeed-facebook-title-checkbox2").attr("checked")) {
      // Disable input and hide its description.
      $("#edit-socialfeed-facebook-title2").attr("disabled","disabled");
      $("#edit-socialfeed-facebook-title2-wrapper > div.description").hide(0);
    }
    $("#edit-socialfeed-facebook-title-checkbox2").bind("click", function() {
      if ($("#edit-socialfeed-facebook-title-checkbox2").attr("checked")) {
        // Disable input when checkbox is checked.
        $("#edit-socialfeed-facebook-title2").attr("disabled","disabled");
        $("#edit-socialfeed-facebook-title2-wrapper > div[class=description]").slideUp('fast');
      }
      else {
        // Enable input when checkbox is not checked.
        $("#edit-socialfeed-facebook-title2").removeAttr("disabled");
        $("#edit-socialfeed-facebook-title2")[0].focus();
        $("#edit-socialfeed-facebook-title2-wrapper > div[class=description]").slideDown('fast');
      }
    });
  }
});
