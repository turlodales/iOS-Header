//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface VSViewControllerFactory : NSObject
{
    NSOperationQueue *_privateQueue;
}

+ (id)sharedFactory;
- (void).cxx_destruct;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg1 grantingVouchers:(_Bool)arg2 appleAccount:(id)arg3 identityProvider:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)viewControllerForAppsSupportedByIdentityProvider:(id)arg1 supportedApps:(id)arg2 delegate:(id)arg3;
- (id)viewControllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 storage:(id)arg3 acknowledgementHandler:(CDUnknownBlockType)arg4;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(CDUnknownBlockType)arg1;
- (id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(CDUnknownBlockType)arg3;
- (id)loadingViewController;
- (id)authenticationViewControllerForViewModel:(id)arg1;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (void)viewServiceRemoteViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end

