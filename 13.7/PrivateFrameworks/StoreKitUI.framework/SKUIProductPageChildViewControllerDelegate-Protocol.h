//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/NSObject-Protocol.h>

@class NSURL, SKUIItem;
@protocol SKUIProductPageChildViewController;

@protocol SKUIProductPageChildViewControllerDelegate <NSObject>
- (struct CGPoint)topContentOffset;
- (void)productPageChildViewControllerDidLoad:(id <SKUIProductPageChildViewController>)arg1;
- (void)productPageChildViewControllerDidScroll:(id <SKUIProductPageChildViewController>)arg1;
- (void)productPageChildViewControllerDidLoadScrollView:(id <SKUIProductPageChildViewController>)arg1;
- (void)productPageChildOpenURL:(NSURL *)arg1 viewControllerBlock:(UIViewController * (^)(void))arg2;
- (void)productPageChildOpenItem:(SKUIItem *)arg1;
@end

