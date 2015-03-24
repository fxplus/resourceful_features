<?php
/**
 * @file
 * resourceful_pages.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function resourceful_pages_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_categories|node|page|form';
  $field_group->group_name = 'group_categories';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'tags',
    'weight' => '2',
    'children' => array(
      0 => 'field_tags',
      1 => 'field_subject',
      2 => 'field_campus',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'tags',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-categories field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_categories|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_duction|node|page|form';
  $field_group->group_name = 'group_duction';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Introduction',
    'weight' => '9',
    'children' => array(
      0 => 'field_introduction',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Introduction',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-duction field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_duction|node|page|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_images|node|page|form';
  $field_group->group_name = 'group_images';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'page';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'images',
    'weight' => '3',
    'children' => array(
      0 => 'field_image',
      1 => 'field_icon',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'images',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => ' group-images field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_images|node|page|form'] = $field_group;

  return $export;
}
