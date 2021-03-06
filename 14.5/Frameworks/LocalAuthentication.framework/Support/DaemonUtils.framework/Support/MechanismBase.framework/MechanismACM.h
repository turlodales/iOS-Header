//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MechanismBase/MechanismBase.h>

@class ACMContextRecord;

@interface MechanismACM : MechanismBase
{
    struct __ACMHandle *_acmContext;
    unsigned long long _acmFlags;
    ACMContextRecord *_acmContextRecord;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) ACMContextRecord *acmContextRecord; // @synthesize acmContextRecord=_acmContextRecord;
@property(readonly, nonatomic) unsigned long long acmFlags; // @synthesize acmFlags=_acmFlags;
@property(readonly, nonatomic) struct __ACMHandle *acmContext; // @synthesize acmContext=_acmContext;
- (id)initWithEventIdentifier:(long long)arg1 remoteViewController:(long long)arg2 acmContextRecord:(id)arg3 request:(id)arg4;

@end

