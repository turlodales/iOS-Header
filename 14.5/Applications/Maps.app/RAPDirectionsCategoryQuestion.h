//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "RAPMenuQuestion.h"

@class RAPQuestion;
@protocol RAPMenuItem, RAPUserDirectionRequest;

__attribute__((visibility("hidden")))
@interface RAPDirectionsCategoryQuestion : RAPMenuQuestion
{
    id <RAPUserDirectionRequest> _selectedValue;
    RAPQuestion<RAPMenuItem> *_betterRouteAvailableMenuItem;
}

+ (id)localizedHeaderText;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <RAPUserDirectionRequest> selectedValue; // @synthesize selectedValue=_selectedValue;
- (id)followUpQuestionForCategory:(long long)arg1;
@property(readonly, nonatomic) RAPQuestion<RAPMenuItem> *betterRouteAvailableMenuItem; // @synthesize betterRouteAvailableMenuItem=_betterRouteAvailableMenuItem;
@property(readonly, nonatomic) _Bool shouldShowBetterRouteAvailable;
- (_Bool)shouldShowTransitLineQuestion;
- (_Bool)canDisplayMenuItemForQuestionCategory:(long long)arg1;
- (id)mainMenuQuestionCategories;
- (void)resetBadRouteSuggestionsQuestion;
- (long long)questionCategory;
- (int)analyticTarget;
- (id)initWithReport:(id)arg1 parentQuestion:(id)arg2 directions:(id)arg3;

@end

