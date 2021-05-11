    <div class="tip">
	  <code>\di</code> will display the list of user created visible indexes. <code>\di pattern</code> will list
	  indexes matching the pattern.
	  The <code>&#43;</code> modifier will also display persistence, access methode,
	  size and description.
	  The <code>S</code> modifier will also display the system indexes.
      <pre><code class="hljs bash">laetitia=# \di
                 List of relations
 Schema |      Name      | Type  |  Owner   | Table
--------&#43;----------------&#43;-------&#43;----------&#43;-------
 public | test_value_key | index | laetitia | test
(1 row)

laetitia=# \di&#43;
                                           List of relations
 Schema |      Name      | Type  |  Owner   | Table | Persistence | Access Method | Size  | Description
--------&#43;----------------&#43;-------&#43;----------&#43;-------&#43;-------------&#43;---------------&#43;-------&#43;-------------
 public | test_value_key | index | laetitia | test  | permanent   | btree         | 16 kB |
(1 row)

laetitia=# \diS
List of relations
   Schema   |                     Name                      | Type  |  Owner   |          Table
------------&#43;-----------------------------------------------&#43;-------&#43;----------&#43;-------------------------
 pg_catalog | pg_aggregate_fnoid_index                      | index | postgres | pg_aggregate
 pg_catalog | pg_am_name_index                              | index | postgres | pg_am
 pg_catalog | pg_am_oid_index                               | index | postgres | pg_ami
[...]
 pg_catalog | pg_user_mapping_user_server_index             | index | postgres | pg_user_mapping
 public     | test_value_key                                | index | laetitia | test
(118 rows) </code></pre>This feature is available
since at least Postgres 7.1., but has been upgraded in Postgres 7.2 to add the <code>S</code>
modifier and inPostgres 8.4 to add the <code>&#43;</code> modifier.
	</div>
