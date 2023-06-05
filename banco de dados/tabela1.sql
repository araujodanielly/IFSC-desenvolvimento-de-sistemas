/* criar um banco de dados */
create database Sispedido;

/* ativar o banco */
use SisPedido;

CREATE TABLE cliente (
cod_cliente int NOT NULL,
nome varchar (40) not null,
endereco varchar (100),
email varchar (20),
fone varchar (16),
PRIMARY KEY (cod_cliente)
);

CREATE TABLE vendedor (
cod_vende int NOT NULL,
nome varchar (40) not null,
pct_comissao float,
fone varchar (16),
PRIMARY KEY (cod_vende)
);

CREATE TABLE produto (
cod_produto int NOT NULL,
descricao varchar (100),
unidade varchar (5),
preco_unit float,
PRIMARY KEY (cod_produto)
);

CREATE TABLE pedido (
nr_pedido int NOT NULL,
data_emis date not null,
valor float,
end_entrega varchar(100),
vl_comissao float,
cod_cliente int,
cod_vendedor int,
primary key(nr_pedido),
foreign key (cod_cliente) references cliente(cod_cliente),
foreign key (cod_vendedor) references vendedor(cod_vend) 
);
CREATE TABLE itens_pedido (
nr_pedido int NOT NULL,
cod_produto int not null,
valor float,
qtde float,
preco_unit float,
primary key(nr_pedido, cod_produto),
foreign key (nr_pedido) references pedido(nr_pedido),
foreign key (cod_produto) references produto(cod_produto)
);
select * from cliente;
select * from vendedor;
select * from produto;
select * from pedido;
select * from itens_pedido;
alter table cliente add(cnpj varchar(20));
alter table vendedor add(email varchar(20));
/* altera a tabela - modifica o tipo de coluna*/
alter table vendedor CHANGE fone telefone VARCHAR(16);
alter table cliente CHANGE fone telefone VARCHAR(16);

alter table vendedor add(email2 varchar(20));
select * from vendedor;
alter table vendedor drop column email2; /*apaga*/



