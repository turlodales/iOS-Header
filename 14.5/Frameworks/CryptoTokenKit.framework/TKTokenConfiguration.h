//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSString, TKTokenConfigurationConnection, TKTokenID;

@interface TKTokenConfiguration : NSObject
{
    TKTokenConfigurationConnection *_configurationConnection;
    NSArray *_keychainItems;
    TKTokenID *_tokenID;
}

+ (void)set_hasSeparateKeysAndCertificatesObjectIDSpace:(_Bool)arg1;
+ (_Bool)_hasSeparateKeysAndCertificatesObjectIDSpace;
+ (id)interfaceForProtocol;
- (void).cxx_destruct;
@property(readonly, nonatomic) TKTokenID *tokenID; // @synthesize tokenID=_tokenID;
- (id)certificateForObjectID:(id)arg1 error:(id *)arg2;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSArray *keychainItems;
@property(copy, nonatomic) NSData *configurationData;
- (id)beginTransaction;
@property(readonly, nonatomic) NSString *instanceID;
- (id)initWithTokenID:(id)arg1 configurationConnection:(id)arg2;

@end

