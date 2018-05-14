//
// Created by Ryan on 5/5/18.
//

#ifndef BLOCK_BLOCK_H
#define BLOCK_BLOCK_H

#include<string>
#include<vector>


class block {
private:
    long long int previous_hash;
    std::vector<std::string> transactions;
    long long int current_hash;

public:
    block(std::vector<std::string> newTransactions, long long int previousHash);
    long long int getPreviousHash();
    std::vector<std::string> getTransactions();
    long long int getCurrentHash();
    long long int hash_signature(std::vector<std::string> transaction, long long int previousHash);

};


#endif //BLOCK_BLOCK_H
