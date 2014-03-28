<?php
/**
 * @file
 * mediacommons_profile2.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function mediacommons_profile2_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mediacommonsprofile|default';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mediacommonsprofile';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_stacked_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'header' => array(
        0 => 'field_job_title',
        1 => 'field_organization',
        2 => 'field_location',
        3 => 'field_telephone',
        4 => 'group_contactinfo',
        5 => 'field_skype',
        6 => 'field_twitter',
        7 => 'field_email',
        8 => 'field_url',
      ),
    ),
    'fields' => array(
      'field_job_title' => 'header',
      'field_organization' => 'header',
      'field_location' => 'header',
      'field_telephone' => 'header',
      'group_contactinfo' => 'header',
      'field_skype' => 'header',
      'field_twitter' => 'header',
      'field_email' => 'header',
      'field_url' => 'header',
    ),
    'classes' => array(),
    'wrappers' => array(
      'header' => 'div',
      'left' => 'div',
      'right' => 'div',
      'footer' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|mediacommonsprofile|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'profile2|mediacommonsprofile|form';
  $ds_layout->entity_type = 'profile2';
  $ds_layout->bundle = 'mediacommonsprofile';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_profile2',
        1 => 'field_job_title',
        2 => 'field_organization',
        3 => 'field_location',
        4 => 'field_email',
        5 => 'field_url',
        6 => 'field_telephone',
        7 => 'field_skype',
        8 => 'field_twitter',
        9 => 'group_basicinfo',
        10 => 'group_contact',
        11 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_profile2' => 'ds_content',
      'field_job_title' => 'ds_content',
      'field_organization' => 'ds_content',
      'field_location' => 'ds_content',
      'field_email' => 'ds_content',
      'field_url' => 'ds_content',
      'field_telephone' => 'ds_content',
      'field_skype' => 'ds_content',
      'field_twitter' => 'ds_content',
      'group_basicinfo' => 'ds_content',
      'group_contact' => 'ds_content',
      '_add_existing_field' => 'ds_content',
    ),
    'classes' => array(),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['profile2|mediacommonsprofile|form'] = $ds_layout;

  return $export;
}
