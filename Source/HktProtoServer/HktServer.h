#pragma once

#include "CoreMinimal.h"
#include <string>

class FHktRpcService;

class FHktServer
{
public:
    FHktServer();
    ~FHktServer();

    void Run(const std::string& server_address);
    void Shutdown();

private:
    TUniquePtr<FHktRpcService> RpcService;
};
