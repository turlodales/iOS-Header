//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreKnowledge/CKVDonateTask.h>

@class CKVLaunchServicesBridge;

@interface CKVAppInfoDonateTask : CKVDonateTask
{
    CKVLaunchServicesBridge *_launchServicesBridge;
}

- (void).cxx_destruct;
- (void)donateAllAppInfoWithLanguageCode:(id)arg1 reason:(unsigned short)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDonatorProvider:(id)arg1 launchServicesBridge:(id)arg2;
- (id)initWithDonatorProvider:(id)arg1;

@end

