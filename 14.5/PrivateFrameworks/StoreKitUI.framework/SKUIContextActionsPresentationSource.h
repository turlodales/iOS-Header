//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIBarButtonItem, UIView, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUIContextActionsPresentationSource : NSObject
{
    UIViewController *_viewController;
    UIView *_sourceView;
    UIBarButtonItem *_barButtonItem;
    struct CGRect _sourceRect;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIBarButtonItem *barButtonItem; // @synthesize barButtonItem=_barButtonItem;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)presentViewController:(id)arg1 permittedArrowDirections:(unsigned long long)arg2 animated:(_Bool)arg3;
- (id)initWithViewController:(id)arg1;

@end

