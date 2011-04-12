<?php 

function _phoneresource_retrieve($user_id) {
  
  $object = db_query('select phonenumber from {phonebook} where user_id=:user_id', array(':user_id' => $user_id ))->fetchObject();
  return  $object; 
}

function _phoneresource_hierarchy ($user_id) {

  $own_user = db_query('select * from {phonebook} where user_id=:user_id', array(':user_id' => $user_id ))->fetchObject();  
  $own_user->parent_user = db_query('select * from {phonebook} where user_id=:user_id', array(':user_id' => $own_user->parent_user_id ))->fetchObject();
  
  $child_result = db_query('select * from {phonebook} where parent_user_id=:user_id', array(':user_id' => $user_id ));
  while( $child_object = $child_result->fetchObject()) {
    $own_user->childs[] = $child_object;
  }
  
  return  $own_user; 
}