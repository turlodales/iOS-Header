//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Nov 12 2019 23:20:19).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <EventKitUI/EKCalendarItemEditItem.h>

__attribute__((visibility("hidden")))
@interface EKCalendarItemCalendarEditItem : EKCalendarItemEditItem
{
    unsigned long long _entityType;
}

- (_Bool)editItemViewControllerSave:(id)arg1;
- (id)detailViewControllerWithFrame:(struct CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (_Bool)_shouldShowSourceForCalendar:(id)arg1;
- (_Bool)requiresReconfigurationOnSave;
- (_Bool)shouldAppearWithVisibility:(int)arg1;
- (_Bool)canBeConfiguredForCalendarConstraints:(id)arg1;
- (id)init;
- (id)initWithEntityType:(unsigned long long)arg1;

@end

