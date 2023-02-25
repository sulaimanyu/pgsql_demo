# pgsql_demo for a sum plugin

## Edit Makefile 
  * Update the PG_CONFIG to the bin of the path your pgsql installed

## Build
```Shell
make
sudo make install
```

## Register the Function
```SQL
CREATE FUNCTION my_sum(INT, INT) RETURNS INT AS '/usr/local/pgsql/lib/my_sum', 'get_my_sum' LANGUAGE C STRICT;
```


