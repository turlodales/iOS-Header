//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CalendarDaemon/CADOperationGroup.h>

#import <CalendarDaemon/CADTestingInterface-Protocol.h>

__attribute__((visibility("hidden")))
@interface CADTestingOperationGroup : CADOperationGroup <CADTestingInterface>
{
}

+ (_Bool)requiresEventOrReminderAccess;
+ (_Bool)requiresReminderAccess;
+ (_Bool)requiresEventAccess;
- (void)CADTestingCloseDatabase:(CDUnknownBlockType)arg1;
- (void)CADTestingSimulateDaemonCrash;
- (_Bool)accessGrantedToPerformSelector:(SEL)arg1;

@end

