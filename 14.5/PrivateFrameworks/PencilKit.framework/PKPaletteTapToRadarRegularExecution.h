//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/PKPaletteTapToRadarCommandExecution.h>

#import <PencilKit/PKTextInputDebugRadarViewControllerDelegate-Protocol.h>
#import <PencilKit/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString, UIWindow;

@interface PKPaletteTapToRadarRegularExecution : PKPaletteTapToRadarCommandExecution <PKTextInputDebugRadarViewControllerDelegate, UIAdaptivePresentationControllerDelegate>
{
    UIWindow *_window;
}

- (void).cxx_destruct;
- (void)presentationControllerDidDismiss:(id)arg1;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1 traitCollection:(id)arg2;
- (void)debugRadarViewControllerDidDismiss:(id)arg1;
- (void)_dismiss;
- (void)run;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

