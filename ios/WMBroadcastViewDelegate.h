//
//  WMBroadcastViewDelegate.h
//  WowzaMedl
//
//  Created by Hugo Nagano on 10/28/16.
//  Copyright © 2016 Hugo Nagano. All rights reserved.
//

#import "WowzaGoCoderSDK.h"
#import "WOWZError.h"
#import "WOWZDataEvent.h"

@protocol WMBroadcastViewDelegate <NSObject>

-(void)didStartBroacast;
-(void)didFailToStartBroadcast:(NSError *)error;
-(void)broadcastStatusDidChange:(WOWZBroadcastStatus *)state;
-(void)broadcastDidReceiveEvent:(WOWZBroadcastStatus *)event andError:(NSError *)error;
-(void)broadcastDidReceiveError:(NSError *) error;
-(void)brodcastVideoFrameWasEncoded:(NSInteger *)durationInSeconds;
@end

