    <div class="tip">
	  Using the <code>\d</code> metacommand without a pattern will show a list of all
	  visible tables, views, materialized views, sequences and foreign tables.
      <pre><code class="hljs bash">laetitia=# \d
             List of relations
 Schema |    Name     |   Type   |  Owner   
--------&#43;-------------&#43;----------&#43;----------
 public | animal      | table    | laetitia
 public | test        | table    | laetitia
 public | test_id_seq | sequence | laetitia
(3 rows) </code></pre>This feature is available
since Postgres 7.0, but has been updated in Postgres 9.0 and Postgres 9.3.
	</div>
