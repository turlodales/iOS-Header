//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUIAction.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VUIActionUpdateSportsFavorite : VUIAction
{
    IKViewElement *_viewElement;
    NSString *_sportsLeagueID;
    NSString *_sportsTeamName;
}

+ (void)performFavoritesOperation:(_Bool)arg1 teamId:(id)arg2 teamName:(id)arg3 requestExecutionHandler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sportsTeamName; // @synthesize sportsTeamName=_sportsTeamName;
@property(copy, nonatomic) NSString *sportsLeagueID; // @synthesize sportsLeagueID=_sportsLeagueID;
@property(nonatomic) __weak IKViewElement *viewElement; // @synthesize viewElement=_viewElement;
- (_Bool)isAccountRequired;
- (void)performWithTargetResponder:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithContextData:(id)arg1 viewElement:(id)arg2;

@end

