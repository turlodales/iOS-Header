//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/_SFKey.h>

@interface _SFPublicKey : _SFKey
{
    id _publicKeyInternal;
}

+ (id)_secKeyCreationAttributesForSpecifier:(id)arg1;
+ (Class)_attributesClass;
- (void).cxx_destruct;
- (id)keyData;
@property(readonly, nonatomic, getter=_secKey) struct __SecKey *secKey;
- (id)initWithSecKey:(struct __SecKey *)arg1;
- (id)initWithData:(id)arg1 specifier:(id)arg2 error:(id *)arg3;
- (id)initWithAttributes:(id)arg1;

@end

