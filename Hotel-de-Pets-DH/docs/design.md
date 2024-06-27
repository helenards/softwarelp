# Design do Software Hotel de Pets DH

## Estrutura do projeto
O projeto está organizado em vários módulos para facilitar a manutenção e a escalabilidade. 
Visão geral dos módulos:
- **Inteface do Usuário**: Gerencia a interação com o usuário.
- **Cadastro de Tutores**: Gerencia o cadastro e a listagem de tutores.
- **Cadastro de Pets**: Gerencia o cadastro e a listagem de pets.
- **Reservas**: Gerencia a criação e a listagem de reservas.
- **Banco de Dados**: Armazena os dados de tutores, pets e reservas em arquivos binários.
- **Sincronização**: Utiliza semáforos para garantir a integridade dos dados durante acessos concorrentes.

## Diagrama de Interação

[Usuário] ----> [Interface do Usuário] ----> [Módulo de Cadastro de Tutores] | [Módulo de Cadastro de Pets] | [Módulo de Reservas] | [Módulo de Banco de Dados] | 
[Módulo de Sincronização] | [Dados em arquivos]

## Considerações de Implementação
- **Persistência de Dados**: Utilização de arquivos binários para armazenar informações.
- **Concorrência**: Utilização de semáforos para controle de acesso simultâneo.
- **Escalabilidade**: Estrutura modular para facilitar a adição de novas funcionalidades.
