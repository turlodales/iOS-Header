//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <network/NWConcrete_nw_endpoint.h>

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_srv_endpoint : NWConcrete_nw_endpoint
{
    char *name;
}

- (unsigned long long)getHash;
- (id)copyEndpoint;
- (_Bool)isEqualToEndpoint:(id)arg1 matchInterface:(_Bool)arg2 matchParent:(_Bool)arg3;
- (char *)createDescription:(_Bool)arg1;
- (const char *)domainForPolicy;
- (id)copyDictionary;
- (unsigned int)type;
- (void)dealloc;
- (id)initWithName:(const char *)arg1;

@end

