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
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function mediacommons_profile2_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function mediacommons_profile2_image_default_styles() {
  $styles = array();

  // Exported image style: profile_page_pic.
  $styles['profile_page_pic'] = array(
    'name' => 'profile_page_pic',
    'label' => 'Profile page pic',
    'effects' => array(
      1 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 100,
          'height' => 100,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
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
