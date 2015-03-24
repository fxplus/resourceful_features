<?php
/**
 * @file
 * resourceful_pages.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function resourceful_pages_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'resourceful_books';
  $context->description = 'Show menu block etc to allow book navigation';
  $context->tag = 'navigation';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu_block-1' => array(
          'module' => 'menu_block',
          'delta' => '1',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Show menu block etc to allow book navigation');
  t('navigation');
  $export['resourceful_books'] = $context;

  return $export;
}
