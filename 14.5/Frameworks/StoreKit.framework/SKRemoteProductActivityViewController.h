//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIRemoteViewController.h>

#import <StoreKit/SKUIClientProductActivityViewController-Protocol.h>

@class NSString, SKStoreProductActivityViewController;

__attribute__((visibility("hidden")))
@interface SKRemoteProductActivityViewController : _UIRemoteViewController <SKUIClientProductActivityViewController>
{
    SKStoreProductActivityViewController *_productActivityViewController;
}

+ (id)serviceViewControllerInterface;
+ (id)exportedInterface;
- (void).cxx_destruct;
@property(nonatomic) __weak SKStoreProductActivityViewController *productActivityViewController; // @synthesize productActivityViewController=_productActivityViewController;
- (void)didFinishWithResult:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

