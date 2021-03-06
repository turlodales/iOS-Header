//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIStateRestoring-Protocol.h"

@class FRArticlePageViewController, FRArticleViewHeadlineContext, NSArray;
@protocol FCHeadlineProviding;

@protocol FRArticlePageViewDelegate <UIStateRestoring>

@optional
- (void)articlePageViewController:(FRArticlePageViewController *)arg1 hideTabBar:(_Bool)arg2;
- (void)articlePageViewController:(FRArticlePageViewController *)arg1 didFinishLoadingEndOfArticleSectionWithHeadline:(id <FCHeadlineProviding>)arg2 publisherHeadlines:(NSArray *)arg3;
- (void)articlePageViewController:(FRArticlePageViewController *)arg1 didSelectHeadlineContext:(FRArticleViewHeadlineContext *)arg2;
@end

