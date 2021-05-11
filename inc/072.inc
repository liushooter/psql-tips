    <div class="tip">
	  By default, the <code>\d</code> won't show system object. You can either use
	  the <code>\dS</code> or supply pattern to include system objects.
      <pre><code class="hljs bash">laetitia=# \d
             List of relations
 Schema |    Name     |   Type   |  Owner
--------&#43;-------------&#43;----------&#43;----------
 public | animal      | table    | laetitia
 public | test        | table    | laetitia
 public | test_id_seq | sequence | laetitia
(3 rows)

laetitia=# \dS
                         List of relations
   Schema   |              Name               |   Type   |  Owner
------------&#43;---------------------------------&#43;----------&#43;----------
 pg_catalog | pg_aggregate                    | table    | postgres
 pg_catalog | pg_am                           | table    | postgres
 pg_catalog | pg_amop                         | table    | postgres
 pg_catalog | pg_amproc                       | table    | postgres
[...]
 pg_catalog | pg_views                        | view     | postgres
 public     | animal                          | table    | laetitia
 public     | test                            | table    | laetitia
 public     | test_id_seq                     | sequence | laetitia
(136 rows)

laetitia=# \d pg_aggregate
               Table "pg_catalog.pg_aggregate"
      Column      |   Type   | Collation | Nullable | Default
------------------&#43;----------&#43;-----------&#43;----------&#43;---------
 aggfnoid         | regproc  |           | not null |
 aggkind          | "char"   |           | not null |
 aggnumdirectargs | smallint |           | not null |
 aggtransfn       | regproc  |           | not null |
 aggfinalfn       | regproc  |           | not null |
 aggcombinefn     | regproc  |           | not null |
 aggserialfn      | regproc  |           | not null |
 aggdeserialfn    | regproc  |           | not null |
 aggmtransfn      | regproc  |           | not null |
 aggminvtransfn   | regproc  |           | not null |
 aggmfinalfn      | regproc  |           | not null |
 aggfinalextra    | boolean  |           | not null |
 aggmfinalextra   | boolean  |           | not null |
 aggfinalmodify   | "char"   |           | not null |
 aggmfinalmodify  | "char"   |           | not null |
 aggsortop        | oid      |           | not null |
 aggtranstype     | oid      |           | not null |
 aggtransspace    | integer  |           | not null |
 aggmtranstype    | oid      |           | not null |
 aggmtransspace   | integer  |           | not null |
 agginitval       | text     | C         |          |
 aggminitval      | text     | C         |          |
Indexes:
    "pg_aggregate_fnoid_index" PRIMARY KEY, btree (aggfnoid) </code></pre>This feature is available
since Postgres 8.4.
	</div>
