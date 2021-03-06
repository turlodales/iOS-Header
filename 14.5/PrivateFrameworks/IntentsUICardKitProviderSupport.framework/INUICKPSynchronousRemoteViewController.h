//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <IntentsUICardKitProviderSupport/CRKCardSectionViewControlling-Protocol.h>
#import <IntentsUICardKitProviderSupport/INUICKPSynchronousRemoteViewDelegate-Protocol.h>
#import <IntentsUICardKitProviderSupport/INUIRemoteViewControllerDelegate-Protocol.h>

@class INUIRemoteViewController, NSSet, NSString;
@protocol CRKCardSectionViewControllingDelegate, INUICKPInterfaceSectionOrganizing, INUICKPSynchronousRemoteViewControllerDelegate;

@interface INUICKPSynchronousRemoteViewController : UIViewController <INUICKPSynchronousRemoteViewDelegate, CRKCardSectionViewControlling, INUIRemoteViewControllerDelegate>
{
    id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate;
    INUIRemoteViewController *_remoteViewController;
    id <INUICKPInterfaceSectionOrganizing> _interfaceSectionOrganizer;
    id <INUICKPSynchronousRemoteViewControllerDelegate> _delegate;
}

+ (void)requestInstanceWithInfo:(id)arg1 configuration:(id)arg2 synchronousRemoteViewControllerDelegate:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(nonatomic) __weak id <INUICKPSynchronousRemoteViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <INUICKPInterfaceSectionOrganizing> interfaceSectionOrganizer; // @synthesize interfaceSectionOrganizer=_interfaceSectionOrganizer;
@property(retain, nonatomic) INUIRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <CRKCardSectionViewControllingDelegate> cardSectionViewControllingDelegate; // @synthesize cardSectionViewControllingDelegate;
- (struct CGSize)preferredContentSize;
- (struct CGSize)cachedSizeForSynchronousRemoteView:(id)arg1;
- (id)interfaceSectionsForRemoteViewController:(id)arg1;
- (id)maximumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (id)minimumSizesBySystemVersionForRemoteViewController:(id)arg1;
- (void)remoteViewControllerServiceDidTerminate:(id)arg1;
- (id)_minimumSizesBySystemVersion;
- (id)_interaction;
@property(readonly, copy, nonatomic) NSSet *cachedRepresentedParameters;
- (_Bool)_canShowWhileLocked;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

