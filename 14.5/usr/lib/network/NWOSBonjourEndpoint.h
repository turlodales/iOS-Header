//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <network/NWConcrete_nw_endpoint.h>

@class NSObject;
@protocol OS_nw_txt_record;

__attribute__((visibility("hidden")))
@interface NWOSBonjourEndpoint : NWConcrete_nw_endpoint
{
    char *service_name;
    char *service_type;
    char *service_domain;
    char *service_composite;
    NSObject<OS_nw_txt_record> *txt_record;
}

- (void).cxx_destruct;
- (unsigned long long)getHash;
- (id)copyEndpoint;
- (_Bool)isEqualToEndpoint:(id)arg1 matchInterface:(_Bool)arg2 matchParent:(_Bool)arg3;
- (char *)createDescription:(_Bool)arg1;
- (void)setTxtRecord:(id)arg1;
- (id)txtRecord;
- (const char *)domainForPolicy;
- (id)copyDictionary;
- (unsigned int)type;
- (void)dealloc;

@end

