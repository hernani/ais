<ul>
  <li> <?php print ($object->parent_user) ? $object->parent_user->name : ''?> </li>
	<ul>
		<li> <?php print $object->name ?> </li>
			<ul>
				<?php if (isset($object->childs) && !empty($object->childs)): ?>
				<?php foreach ($object->childs as $child_user): ?>
					<li> <?php print $child_user->name ?> </li>
	            <?php endforeach; ?>
	            <?php endif;?>
			</ul>
	</ul>
</ul>