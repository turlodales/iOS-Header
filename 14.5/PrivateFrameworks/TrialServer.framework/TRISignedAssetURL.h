//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TrialServer/NSCopying-Protocol.h>

@class NSString, NSURL;

@interface TRISignedAssetURL : NSObject <NSCopying>
{
    NSURL *_url;
    NSString *_signature;
}

+ (id)assetURLWithUrl:(id)arg1 signature:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *signature; // @synthesize signature=_signature;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToAssetURL:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyWithReplacementSignature:(id)arg1;
- (id)copyWithReplacementUrl:(id)arg1;
- (id)initWithUrl:(id)arg1 signature:(id)arg2;

@end

