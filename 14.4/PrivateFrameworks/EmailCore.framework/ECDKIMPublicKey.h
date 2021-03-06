//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface ECDKIMPublicKey : NSObject
{
    NSString *_version;
    unsigned long long _hashingAlgorithm;
    unsigned long long _signingAlgorithm;
    NSString *_notes;
    NSData *_publicKeyData;
    NSString *_serviceType;
    NSString *_flags;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *flags; // @synthesize flags=_flags;
@property(readonly, copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, copy, nonatomic) NSData *publicKeyData; // @synthesize publicKeyData=_publicKeyData;
@property(readonly, copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(readonly, nonatomic) unsigned long long signingAlgorithm; // @synthesize signingAlgorithm=_signingAlgorithm;
@property(readonly, nonatomic) unsigned long long hashingAlgorithm; // @synthesize hashingAlgorithm=_hashingAlgorithm;
@property(readonly, copy, nonatomic) NSString *version; // @synthesize version=_version;
- (void)_parseFlagsFromDictionary:(id)arg1;
- (void)_parseServiceTypeFromDictionary:(id)arg1;
- (void)_parsePublicKeyDataFromDictionary:(id)arg1;
- (void)_parseNotesFromDictionary:(id)arg1;
- (void)_parseSigningAlgorithmFromDictionary:(id)arg1;
- (void)_parseAcceptableHashingAlgorithmsFromDictionary:(id)arg1;
- (void)_parseVersionFromDictionary:(id)arg1;
- (id)description;
- (id)initWithRecord:(id)arg1;
- (id)initWithKeyValueDictionary:(id)arg1;
- (id)initWithVersion:(id)arg1 hashingAlgorithm:(unsigned long long)arg2 signingAlgorithm:(unsigned long long)arg3 notes:(id)arg4 publicKeyData:(id)arg5 serviceType:(id)arg6 flags:(id)arg7;

@end

