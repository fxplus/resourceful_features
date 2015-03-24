<?php
/**
 * @file
 * resourceful_pages.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function resourceful_pages_taxonomy_default_vocabularies() {
  return array(
    'campus' => array(
      'name' => 'Campus',
      'machine_name' => 'campus',
      'description' => 'Tremough/Woodlane',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'subject' => array(
      'name' => 'Subject',
      'machine_name' => 'subject',
      'description' => 'Associated subjects',
      'hierarchy' => 1,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'tag' => array(
      'name' => 'Tag',
      'machine_name' => 'tag',
      'description' => 'Loose subject classification ',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
