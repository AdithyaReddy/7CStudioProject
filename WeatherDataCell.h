//
//  WeatherDataCell.h
//  SevenCStudioProject
//
//  Created by Adithya Reddy on 02/02/16.
//  Copyright © 2016 Adithya Reddy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WeatherDataCell : UICollectionViewCell

@property (strong, nonatomic) IBOutlet UILabel* lblCurrentDate;
@property (strong, nonatomic) IBOutlet UILabel* lblCurrentTemp;
@property (strong, nonatomic) IBOutlet UIImageView* imgViewCurrentWeather;

@end
