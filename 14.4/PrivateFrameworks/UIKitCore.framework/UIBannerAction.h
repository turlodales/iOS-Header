//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class _UIBannerContent;

@interface UIBannerAction : BSAction
{
}

- (_Bool)bannerTapped;
@property(readonly, nonatomic) _Bool tappable;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) _UIBannerContent *bannerContent;
- (id)_initWithBannerContent:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initWithBannerContent:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initWithBannerContent:(id)arg1;
- (long long)UIActionType;

@end

