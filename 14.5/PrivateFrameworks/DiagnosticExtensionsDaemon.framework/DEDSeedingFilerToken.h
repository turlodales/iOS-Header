//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface DEDSeedingFilerToken : NSObject
{
    NSNumber *_entityID;
    NSString *_token;
    NSString *_dsid;
    long long _submissionType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long submissionType; // @synthesize submissionType=_submissionType;
@property(readonly, nonatomic) NSString *dsid; // @synthesize dsid=_dsid;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property(readonly, nonatomic) NSNumber *entityID; // @synthesize entityID=_entityID;
- (id)compiledEntityID;
- (id)initWithEntityID:(id)arg1 type:(long long)arg2 token:(id)arg3 dsid:(id)arg4;

@end

