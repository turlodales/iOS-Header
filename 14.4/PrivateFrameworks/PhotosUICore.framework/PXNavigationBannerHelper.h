//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController, _UINavigationControllerPalette;

@interface PXNavigationBannerHelper : NSObject
{
    _Bool _enabled;
    UIViewController *_viewController;
    _UINavigationControllerPalette *_palette;
}

- (void).cxx_destruct;
@property(retain, nonatomic) _UINavigationControllerPalette *palette; // @synthesize palette=_palette;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithViewController:(id)arg1;

@end

