//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CalendarMessageCell.h"

@class EKCalendarResourceChangeNotification, NSString;

@interface CalendarMessageResourceChangeCell : CalendarMessageCell
{
    NSString *_dateString;
    NSString *_changeString;
}

- (void).cxx_destruct;
@property(retain, nonatomic) EKCalendarResourceChangeNotification *notification; // @dynamic notification;
- (id)actions;
- (long long)_changedPropertyCount;
- (id)bodyStringDict;
- (id)titleStrings;

@end

