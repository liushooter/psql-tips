    <div class="tip">
	  <code>\dT</code> will display a list of data types. The <code>S</code> modifier will allow to
	  list system data types too. <code>\dT pattern</code> will list data types matching
	  the pattern. the <code>+</code> Internal name, size, Elements, Owner and Access
	  privileges.
      <pre><code class="hljs bash">laetitia=# \dT
          List of data types
 Schema |     Name      | Description 
--------+---------------+-------------
 public | one_word_only | 
(1 row)

laetitia=# \dTS line
         List of data types
   Schema   | Name |  Description   
------------+------+----------------
 pg_catalog | line | geometric line
(1 row)

laetitia=# \dT+
                                          List of data types
 Schema |     Name      | Internal name | Size | Elements |  Owner   | Access privileges | Description 
--------+---------------+---------------+------+----------+----------+-------------------+-------------
 public | one_word_only | one_word_only | var  |          | laetitia |                   | 
(1 row)</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
