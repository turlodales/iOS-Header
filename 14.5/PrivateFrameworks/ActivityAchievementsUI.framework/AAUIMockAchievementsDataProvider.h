//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActivityAchievementsUI/AAUIAchievementsDataProvider.h>

@class NSArray;

@interface AAUIMockAchievementsDataProvider : AAUIAchievementsDataProvider
{
    NSArray *_achievements;
}

- (void).cxx_destruct;
- (id)_monthStringFromTemplateName:(id)arg1;
- (id)_ACHDateComponentIntervalWithMonthOffset:(unsigned long long)arg1;
- (id)_dateComponentsWithDayOffset:(long long)arg1;
- (id)_fitnessUIAssetsURLWithKey:(id)arg1 value:(id)arg2;
- (id)_currentMonthlyChallengeAchievementForTemplate:(id)arg1 localizableSuffix:(id)arg2 goalValue:(long long)arg3 progressValue:(long long)arg4 isEarned:(_Bool)arg5;
- (id)_achievementForTemplate:(id)arg1 earnedInstanceCount:(long long)arg2 earnedInstanceOffset:(long long)arg3 earnedInstanceValue:(long long)arg4 goalValue:(long long)arg5 progressValue:(long long)arg6;
- (void)stopFetching;
- (void)startFetching;
- (void)removeMainSectionObserver:(id)arg1;
- (void)addMainSectionObserver:(id)arg1;
- (void)removeRecentAndRelevantSectionObserver:(id)arg1;
- (void)addRecentAndRelevantSectionObserver:(id)arg1;
- (void)removeInitialLoadObserver:(id)arg1;
- (void)addInitialLoadObserver:(id)arg1;
- (id)headerStringForSection:(long long)arg1 isRecentAndRelevant:(_Bool)arg2;
- (long long)numberOfSections;
- (long long)numberOfItemsInSection:(long long)arg1;
- (id)achievementAtIndexPath:(id)arg1;
- (id)recentAndRelevantAchievementAtIndexPath:(id)arg1;
- (id)init;

@end

