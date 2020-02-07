//
//  RCTAppleHealthKit+Methods_Fitness.h
//  RCTAppleHealthKit
//
//  Created by Greg Wilson on 2016-06-26.
//  This source code is licensed under the MIT-style license found in the
//  LICENSE file in the root directory of this source tree.
//

#import "RCTAppleHealthKit.h"

@interface RCTAppleHealthKit (Methods_Fitness)

- (void)fitness_getStepCountOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_setObserver:(NSDictionary *)input;
- (void)fitness_getStepSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyStepSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getWeeklyStepSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getMonthlyStepSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getAllStepSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getTotalSteps:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_saveSteps:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_initializeStepEventObserver:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)fitness_saveWorkout:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)fitness_getDistanceWalkingRunningOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)fitness_getDistanceRunningWalkingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyDistanceRunningWalkingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getWeeklyDistanceRunningWalkingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getMonthlyDistanceRunningWalkingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getAllDistanceRunningWalkingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getTotalDistanceRunningWalking:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

- (void)fitness_getDistanceCyclingOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyDistanceCyclingSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;



- (void)fitness_getFlightsClimbedOnDay:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;
- (void)fitness_getDailyFlightsClimbedSamples:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;



- (void)fitness_getTotalActiveMinutes:(NSDictionary *)input callback:(RCTResponseSenderBlock)callback;

@end
