//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXPeopleBootstrapFlowController.h>

@class PHPerson, PXPeopleBootstrapConfirmationViewController, PXPeopleBootstrapFinalViewController;

@interface PXUIPeopleBootstrapFlowController : PXPeopleBootstrapFlowController
{
    PXPeopleBootstrapConfirmationViewController *_confirmationViewController;
    PXPeopleBootstrapFinalViewController *_finalViewController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) PXPeopleBootstrapFinalViewController *finalViewController; // @synthesize finalViewController=_finalViewController;
@property(retain, nonatomic) PXPeopleBootstrapConfirmationViewController *confirmationViewController; // @synthesize confirmationViewController=_confirmationViewController;
- (id)_postNamingViewController;
@property(readonly, nonatomic) PHPerson *sourcePerson;
- (void)done:(id)arg1;
- (void)recomputeViewControllersForChangeInKeyPath:(id)arg1;
- (void)computeViewControllersForBootstrapFlow;

@end

