//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@protocol NUPageViewControllerScrollViewAccessibilityDelegate;

@interface NUPageViewControllerScrollView : UIScrollView
{
    id <NUPageViewControllerScrollViewAccessibilityDelegate> _accessibilityDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <NUPageViewControllerScrollViewAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
- (_Bool)accessibilityScroll:(long long)arg1;

@end

