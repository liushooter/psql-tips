    <div class="tip">
	  <code>\dt</code> will display the list of user created and visible
	  tables. <code>\dt pattern</code> will list
	  tables matching the pattern.
	  The <code>&#43;</code> modifier will also display persistence,
	  size and description.
	  The <code>S</code> modifier will also display the system tables.
      <pre><code class="hljs bash">laetitia=# \dt
                    List of relations
 Schema |      Name       |       Type        |  Owner
--------&#43;-----------------&#43;-------------------&#43;----------
 public | animal          | table             | laetitia
 public | first_partition | table             | laetitia
 public | mytest          | table             | test
 public | partition_test  | partitioned table | laetitia
 public | test            | table             | laetitia
(5 rows)

laetitia=# \dt&#43;
                                                 List of relations
 Schema |      Name       |       Type        |  Owner   | Persistence | Access Method |    Size    |  Description
--------&#43;-----------------&#43;-------------------&#43;----------&#43;-------------&#43;---------------&#43;------------&#43;---------------
 public | animal          | table             | laetitia | permanent   | heap          | 16 kB      |
 public | first_partition | table             | laetitia | permanent   | heap          | 8192 bytes |
 public | mytest          | table             | test     | permanent   | heap          | 0 bytes    |
 public | partition_test  | partitioned table | laetitia | permanent   |               | 0 bytes    |
 public | test            | table             | laetitia | permanent   | heap          | 16 kB      | table comment
(5 rows)

laetitia=# \dtS
                          List of relations
   Schema   |          Name           |       Type        |  Owner
------------&#43;-------------------------&#43;-------------------&#43;----------
 pg_catalog | pg_aggregate            | table             | postgres
 pg_catalog | pg_am                   | table             | postgres
[...]
 public     | partition_test          | partitioned table | laetitia
 public     | test                    | table             | laetitia
(67 rows)</code></pre>This feature is available
since at least Postgres 7.1, but has been upgraded in Postgres 7.2 to add the <code>S</code>
modifier and in Postgres 8.4 to add the <code>&#43;</code> modifier.
	</div>
