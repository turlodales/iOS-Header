//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class SSSAppDelegate;

@interface SSSApplication : UIApplication
{
}

+ (id)sharedSSSApplication;
- (_Bool)_canAnimateDragCancelInApp;
- (void)_handlePlatformSpecificActions:(id)arg1 forScene:(id)arg2 withTransitionContext:(id)arg3;
- (id)_preheatActionInActions:(id)arg1;
- (id)_documentUpdateActionInActions:(id)arg1;
- (id)_metadataUpdateActionInActions:(id)arg1;
- (id)_imageIdentifierActionInActions:(id)arg1;
- (id)_screenshotActionInActions:(id)arg1;
- (id)_actionInActions:(id)arg1 ofClass:(Class)arg2;
@property(readonly, nonatomic) SSSAppDelegate *sssAppDelegate;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (id)_pptTestInfos;

@end

