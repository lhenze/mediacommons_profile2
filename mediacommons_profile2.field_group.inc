<?php
/**
 * @file
 * mediacommons_profile2.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function mediacommons_profile2_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basicinfo|profile2|mediacommonsprofile|form';
  $field_group->group_name = 'group_basicinfo';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'mediacommonsprofile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile2';
  $field_group->data = array(
    'label' => 'Basic Info',
    'weight' => '12',
    'children' => array(
      0 => 'field_job_title',
      1 => 'field_organization',
      2 => 'field_location',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basicinfo field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basicinfo|profile2|mediacommonsprofile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contactinfo|profile2|mediacommonsprofile|default';
  $field_group->group_name = 'group_contactinfo';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'mediacommonsprofile';
  $field_group->mode = 'default';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'contact info',
    'weight' => '5',
    'children' => array(
      0 => 'field_telephone',
      1 => 'field_skype',
      2 => 'field_twitter',
      3 => 'field_email',
      4 => 'field_url',
    ),
    'format_type' => 'html5',
    'format_settings' => array(
      'label' => 'contact info',
      'instance_settings' => array(
        'classes' => 'contactinfo',
        'wrapper' => 'section',
      ),
    ),
  );
  $export['group_contactinfo|profile2|mediacommonsprofile|default'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_contact|profile2|mediacommonsprofile|form';
  $field_group->group_name = 'group_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'mediacommonsprofile';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_profile2';
  $field_group->data = array(
    'label' => 'contact',
    'weight' => '13',
    'children' => array(
      0 => 'field_telephone',
      1 => 'field_skype',
      2 => 'field_twitter',
      3 => 'field_email',
      4 => 'field_url',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-contact field-group-tabs',
        'description' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_contact|profile2|mediacommonsprofile|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_profile2|profile2|mediacommonsprofile|form';
  $field_group->group_name = 'group_profile2';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'mediacommonsprofile';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'profile2',
    'weight' => '0',
    'children' => array(
      0 => 'group_contact',
      1 => 'group_basicinfo',
    ),
    'format_type' => 'tabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => 'group-profile2 field-group-tabs',
      ),
    ),
  );
  $export['group_profile2|profile2|mediacommonsprofile|form'] = $field_group;

  return $export;
}
