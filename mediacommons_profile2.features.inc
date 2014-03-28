<?php
/**
 * @file
 * mediacommons_profile2.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function mediacommons_profile2_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_default_profile2_type().
 */
function mediacommons_profile2_default_profile2_type() {
  $items = array();
  $items['mediacommonsprofile'] = entity_import('profile2_type', '{
    "userCategory" : true,
    "userView" : true,
    "type" : "mediacommonsprofile",
    "label" : "MediaCommons Profile",
    "weight" : "0",
    "data" : { "registration" : 1, "use_page" : 0 }
  }');
  return $items;
}
